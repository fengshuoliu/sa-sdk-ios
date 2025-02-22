//
// SAVisualizedEventCheck.h
// SensorsAnalyticsSDK
//
// Created by 储强盛 on 2021/3/22.
// Copyright © 2021 Sensors Data Co., Ltd. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "SAVisualPropertiesConfigSources.h"

NS_ASSUME_NONNULL_BEGIN

/// H5 可视化全埋点事件标记
extern NSString * const kSAWebVisualEventName;

/// 可视化全埋点埋点校验
@interface SAVisualizedEventCheck : NSObject
- (instancetype)initWithConfigSources:(SAVisualPropertiesConfigSources *)configSources;

/// 筛选事件结果
@property (nonatomic, strong, readonly) NSArray<NSDictionary *> *eventCheckResult;

/// 清除调试事件
- (void)cleanEventCheckResult;
@end

NS_ASSUME_NONNULL_END
