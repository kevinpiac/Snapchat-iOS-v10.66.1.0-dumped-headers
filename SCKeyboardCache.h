//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCKeyboardCache : NSObject
{
    _Bool _hasAlreadyShowedKeyboard;
}

+ (id)sharedInstance;
- (void)_cacheKeyboardIfNecessary;
- (void)_keyboardWillShow:(id)arg1;
- (void)cacheKeyboard;
- (id)init;

@end

