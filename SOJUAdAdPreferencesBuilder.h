//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface SOJUAdAdPreferencesBuilder : NSObject
{
    NSNumber *_isAudienceMatchOptOut;
    NSNumber *_isExternalActivityMatchOptOut;
}

+ (id)withJUAdAdPreferences:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setIsAudienceMatchOptOut:(id)arg1;
- (id)setIsAudienceMatchOptOutValue:(_Bool)arg1;
- (id)setIsExternalActivityMatchOptOut:(id)arg1;
- (id)setIsExternalActivityMatchOptOutValue:(_Bool)arg1;

@end

