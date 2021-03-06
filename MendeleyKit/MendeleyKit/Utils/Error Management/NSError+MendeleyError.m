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

#import "NSError+MendeleyError.h"
#import "MendeleyResponse.h"

@implementation NSError (MendeleyKit)

+ (id)errorWithCode:(MendeleyErrorCode)code localizedDescription:(NSString *)localizedDescription
{
    if (nil == localizedDescription)
    {
        localizedDescription = MendeleyErrorUnknown;
    }
    NSDictionary *userInfo = @{ NSLocalizedDescriptionKey: localizedDescription };
    return [[self class] errorWithDomain:kMendeleyErrorDomain code:code userInfo:userInfo];
}

+ (id)errorWithCode:(MendeleyErrorCode)code
{
    return [[MendeleyErrorManager sharedInstance] errorWithDomain:kMendeleyErrorDomain code:code];
}

+ (id)errorWithMendeleyResponse:(MendeleyResponse *)response
{
    if (nil == response)
    {
        return [[MendeleyErrorManager sharedInstance] errorWithDomain:kMendeleyErrorDomain code:MendeleyErrorUnknown];
    }
    NSDictionary *userInfo = @{ NSLocalizedDescriptionKey: [NSHTTPURLResponse localizedStringForStatusCode:response.statusCode] };
    return [[self class] errorWithDomain:kMendeleyErrorDomain code:kMendeleyErrorNetworkBaseCode + response.statusCode userInfo:userInfo];
}

@end
