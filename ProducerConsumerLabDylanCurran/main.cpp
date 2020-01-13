#include <iostream>
#include <thread>
#include <math.h>
#include "Consumer.h"
#include"GlobalVariables.h"
#include"Producer.h"
#include <thread>
#include <time.h>
#pragma once

	
 int main() 
 {
		srand(time(NULL));
		Producer* producer = new Producer();
		Consumer* consumer = new Consumer();

		std::thread t1(&Producer::run, producer, "Producer");
		std::thread t2(&Consumer::run, consumer, "Consumer");
		
		t1.join();
		t2.join();

		return 0;
 }

