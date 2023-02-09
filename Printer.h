#pragma once
#include <iostream>
#include <vector>
#include <memory>
#include "IVehicle.h"

namespace Engine {

	class Printer {
	public:
		void printDefault();
		void showType();
		void addVeh(std::shared_ptr<IVehicle> v);
	private:
		std::vector<std::shared_ptr<IVehicle>> _v;
	};
}