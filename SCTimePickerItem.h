//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface SCTimePickerItem : NSObject <NSSecureCoding>
{
    NSNumber *_time;
}

+ (id)itemWithTime:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTime:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isInfinite;
- (id)secondsString;
@property(readonly, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(readonly, nonatomic) NSNumber *timeForAPI;
- (id)timeString;

@end
