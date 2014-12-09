//
//  StockChartDashedLineAnnotation.m
//  StockChart
//
//  Created by Alison Clarke on 27/08/2014.
//
//  Copyright 2014 Scott Logic
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import <ShinobiCharts/ShinobiCharts.h>

@interface StockChartDashedLineAnnotation : SChartAnnotation

@property (nonatomic, strong) UIBezierPath *dashedLine;

- (id)initWithYValue:(id)yValue xAxis:(SChartAxis *)xAxis yAxis:(SChartAxis*)yAxis;

@end
