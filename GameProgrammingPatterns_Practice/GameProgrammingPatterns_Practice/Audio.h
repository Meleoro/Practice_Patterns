#pragma once
#include <thread>
#include <mutex>


struct PlayMessage
{
    int id;
    float volume;
};


class Audio {

// === MAIN FUNCTIONS === 
public :
    void PlaySound(int id, float volume); 
    void Update();

private : 
    static const int MAX_PENDING = 16;
    static PlayMessage pending[MAX_PENDING];
    static int numPending;


// === MULTITHREADING ===
public :
    void StartThread();
    void StopThread();

private :
    std::mutex mutexPending;
    bool running;
    std::thread audioThread;
};