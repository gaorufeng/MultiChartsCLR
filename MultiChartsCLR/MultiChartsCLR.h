#include "C:\Users\kartik\source\repos\MultiCharts\MultiCharts\MultiCharts.cpp"

#pragma once

namespace MultiChartsCppWrapper {
	public ref class MultiChartsWrapper
	{
	public:
		MultiChartsWrapper();
		~MultiChartsWrapper();
		void DisposeMultiCharts();

		void SetTrainingData(array<double> ^trainingData);
		void SetTestingData(array<double> ^testingData);
		
		void SetTestDateArrayUNIX(array<long long> ^ dateArray);
		void SetDateArrayUNIX(array<long long> ^dateArray);
		
		void SetFileName(System::String^ fileName);
		void SetLearningRate(double learningRate);
		void SetEpochs(int epochs);
		void SetScale(int scale);
		void SetOptimizer(int optimizer);
		void SetMomentum(double momentum);
		void SetTestingWeight(double testingWeight);
		
		double TrainModel();
		double TestModel();
		array<double>^ Evaluate(int metrics);
		array<double>^ Predict(int ticks);

	private:
		MultiCharts *multiCharts;
	};
}