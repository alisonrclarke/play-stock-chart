//
//  NSArray+StockChartUtils.h
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

#import <Foundation/Foundation.h>

@interface NSArray (StockChartUtils)

- (NSUInteger)indexOfSmallestObjectBiggerThan:(id)searchKey inSortedRange:(NSRange)range;
- (NSUInteger)indexOfBiggestObjectSmallerThan:(id)searchKey inSortedRange:(NSRange)range;

- (id)minInRangeFromIndex:(NSUInteger)startIdx toIndex:(NSUInteger)endIdx;
- (id)maxInRangeFromIndex:(NSUInteger)startIdx toIndex:(NSUInteger)endIdx;


@end
