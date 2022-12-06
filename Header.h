#pragma once

class torchic {
	int hp = 45, attack = 60, spAttack = 70, defense = 40, spDefense = 50, velocity = 45;

	void Hp(int hp) {
		this->hp = hp;
	}

	int getHp() {
		return hp;
	}
};

class mudkip {
	int hp = 50, attack = 70, spAttack = 50, defense = 50, spDefense = 50, velocity = 40;
};

class treecko {
	int hp = 40, attack = 45, spAttack = 35, defense = 65, spDefense = 55, velocity = 70;
};