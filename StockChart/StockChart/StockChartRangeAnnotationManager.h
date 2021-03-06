//
//  StockChartRangeAnnotationManager.h
//  StockChart
//
//  Created by Sam Davies on 26/12/2012.
//  
//  Copyright 2013 Scott Logic
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

#import <Foundation/Foundation.h>
#import <ShinobiCharts/ShinobiCharts.h>
#import "StockChartRangeAnnotationDelegate.h"

/**
 Class to add range selector annotations to the chart.
 To use this class, you should call moveRangeSelectorToRange: whenever
 the chart's range changes.
 There's a detailed tutorial on how to create a similar range selector at:
 http://www.shinobicontrols.com/blog/posts/2013/05/building-a-range-selector-with-shinobicharts-part-iv
 */
@interface StockChartRangeAnnotationManager : NSObject

@property (nonatomic, strong) id<StockChartRangeAnnotationDelegate> delegate;

- (instancetype)initWithChart:(ShinobiChart *)chart;
- (instancetype)initWithChart:(ShinobiChart *)chart minimumSpan:(CGFloat)minSpan;
- (void)moveRangeSelectorToRange:(SChartRange *)range;
- (void)moveRangeSelectorToRange:(SChartRange *)range redraw:(BOOL)redraw;
- (void)setInitialMin:(id)min andMax:(id)max;

@end
