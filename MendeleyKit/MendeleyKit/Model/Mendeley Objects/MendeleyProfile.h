/*
 ******************************************************************************
 * Copyright (C) 2014-2017 Elsevier/Mendeley.
 *
 * This file is part of the Mendeley iOS SDK.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *****************************************************************************
 */

#import "MendeleyObject.h"
#import "MendeleyGroup.h"

@interface MendeleyLocation : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *latitude;
@property (nonatomic, strong) NSNumber *longitude;

@end


@interface MendeleyEmployment : NSObject

@property (nonatomic, strong) NSArray *classes;
@property (nonatomic, strong) NSString *position;
@property (nonatomic, strong) NSNumber *is_main_employment;
@property (nonatomic, strong) NSString *institution;
@property (nonatomic, strong) NSDate *start_date;
@property (nonatomic, strong) NSDate *end_date;
@property (nonatomic, strong) NSString *website;

@end

@interface MendeleyEducation : NSObject

@property (nonatomic, strong) NSString *institution;
@property (nonatomic, strong) NSDate *start_date;
@property (nonatomic, strong) NSDate *end_date;
@property (nonatomic, strong) NSString *website;
@property (nonatomic, strong) NSString *degree;

@end

@interface MendeleyDiscipline : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSArray *subdisciplines;

@end

@interface MendeleyProfile : MendeleyObject

@property (nonatomic, strong) MendeleyLocation *location;
@property (nonatomic, strong) NSString *display_name;
@property (nonatomic, strong) NSString *user_type;
@property (nonatomic, strong) NSString *academic_status;
@property (nonatomic, strong) NSDate *created;
@property (nonatomic, strong) NSString *research_interests;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *first_name;
@property (nonatomic, strong) NSString *last_name;
@property (nonatomic, strong) NSString *link;
@property (nonatomic, strong) MendeleyDiscipline *discipline;
@property (nonatomic, strong) MendeleyPhoto *photo;
@property (nonatomic, strong) NSNumber *verified;
@property (nonatomic, strong) NSArray *education;
@property (nonatomic, strong) NSArray *employment;

@end

@interface MendeleyUserProfile : MendeleyProfile

@end