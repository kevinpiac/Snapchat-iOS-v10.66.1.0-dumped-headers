//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate;

@protocol SCLensScheduleInterval <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSDate *endDateTime;
@property(readonly, copy, nonatomic) NSDate *startDateTime;
@end

