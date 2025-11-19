#pragma once

class Superpower {
public :
	virtual ~Superpower() {}

protected :
	virtual void Activate() = 0;     // Sandbox Method

	void DealDamages(int damages);
	void PushEnemies(float strength);
	void PlaySound(int soundId);
	void PlayVFX(int vfxId);
};

class ExplosionPower : public Superpower {
	virtual void Activate() override {
		DealDamages(10);
		PlaySound(0);
		PlayVFX(0);
	}
};

class WindPower : public Superpower {
	virtual void Activate() override {
		PushEnemies(1000);
		PlaySound(1);
		PlayVFX(1);
	}
};