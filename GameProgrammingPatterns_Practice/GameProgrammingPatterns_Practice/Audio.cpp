#include "Audio.h"
#include <iostream>

PlayMessage Audio::pending[MAX_PENDING];
int Audio::numPending = 0;

// Adds a request to a queue
void Audio::PlaySound(int id, float volume)
{
    std::lock_guard<std::mutex> lock(mutexPending);

    if (numPending == MAX_PENDING) return;

    pending[numPending].id = id;
    pending[numPending].volume = volume;

    numPending++;
}


// Executed on it's own thread
void Audio::Update() {
    std::lock_guard<std::mutex> lock(mutexPending);

    for (int i = 0; i < numPending; i++)
    {
        std::cout << "Played Sound" << std::endl;
    }
    numPending = 0;
}


void Audio::StartThread()
{
    running = true;
    audioThread = std::thread([this]() 
        {
            while (running) {
                Update();
                std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        });
}

void Audio::StopThread()
{
    running = false;
    if (audioThread.joinable())
        audioThread.join();
}
