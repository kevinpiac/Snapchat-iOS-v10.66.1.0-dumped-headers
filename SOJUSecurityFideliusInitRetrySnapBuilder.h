//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SOJUSecurityFideliusInitRetrySnapBuilder : NSObject
{
    NSNumber *_snapId;
    NSNumber *_reset;
}

+ (id)withJUSecurityFideliusInitRetrySnap:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setReset:(id)arg1;
- (id)setResetValue:(_Bool)arg1;
- (id)setSnapId:(id)arg1;
- (id)setSnapIdValue:(long long)arg1;

@end
