//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SOJUSnapchatterBuilder : NSObject
{
    NSString *_userId;
    NSString *_username;
    NSNumber *_isUserPopular;
    NSString *_displayUsername;
}

+ (id)withJUSnapchatter:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDisplayUsername:(id)arg1;
- (id)setIsUserPopular:(id)arg1;
- (id)setIsUserPopularValue:(_Bool)arg1;
- (id)setUserId:(id)arg1;
- (id)setUsername:(id)arg1;

@end
