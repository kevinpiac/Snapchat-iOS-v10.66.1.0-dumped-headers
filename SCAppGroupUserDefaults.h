//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface SCAppGroupUserDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)sharedDefaults;
- (void).cxx_destruct;
- (_Bool)boolForKey:(id)arg1;
- (id)initWithNSUserDefaults:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUserBool:(_Bool)arg1 forKey:(id)arg2 userId:(id)arg3;
- (void)setUserInteger:(long long)arg1 forKey:(id)arg2 userId:(id)arg3;
- (void)setUserObject:(id)arg1 forKey:(id)arg2 userId:(id)arg3;
- (void)setUserString:(id)arg1 forKey:(id)arg2 userId:(id)arg3;
- (id)stringForKey:(id)arg1;
- (_Bool)userBoolForKey:(id)arg1 userId:(id)arg2;
- (long long)userIntegerForKey:(id)arg1 userId:(id)arg2;
- (id)userObjectForKey:(id)arg1 userId:(id)arg2;
- (id)userStringForKey:(id)arg1 userId:(id)arg2;

@end
