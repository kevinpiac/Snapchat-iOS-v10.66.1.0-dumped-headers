//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUScannableScannableActionBuilder : NSObject
{
    NSString *_idValue;
    NSString *_type;
    NSString *_data;
    NSString *_status;
    NSNumber *_priority;
    NSNumber *_timeCreated;
    NSNumber *_timeExpired;
    NSString *_devDescription;
}

+ (id)withJUScannableScannableAction:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setData:(id)arg1;
- (id)setDevDescription:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setPriority:(id)arg1;
- (id)setPriorityValue:(int)arg1;
- (id)setStatus:(id)arg1;
- (id)setStatusEnum:(long long)arg1;
- (id)setTimeCreated:(id)arg1;
- (id)setTimeCreatedValue:(long long)arg1;
- (id)setTimeExpired:(id)arg1;
- (id)setTimeExpiredValue:(long long)arg1;
- (id)setType:(id)arg1;
- (id)setTypeEnum:(long long)arg1;

@end

