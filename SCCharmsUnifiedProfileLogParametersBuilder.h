//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCCharmsUnifiedProfileLogParametersBuilder : NSObject
{
    _Bool _isGroupProfile;
    _Bool _isFriendProfile;
    NSString *_profileSessionID;
    int _charmID;
    _Bool _isCharmNew;
    unsigned int _position;
    unsigned int _maxPosition;
    double _viewDuration;
    _Bool _fromTap;
    _Bool _fromSwipeLeft;
    _Bool _fromSwipeRight;
    _Bool _actionSucceeded;
    _Bool _actionCancelled;
    _Bool _actionFailed;
}

+ (id)charmsUnifiedProfileLogParameters;
+ (id)charmsUnifiedProfileLogParametersFromExistingCharmsUnifiedProfileLogParameters:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withActionCancelled:(_Bool)arg1;
- (id)withActionFailed:(_Bool)arg1;
- (id)withActionSucceeded:(_Bool)arg1;
- (id)withCharmID:(int)arg1;
- (id)withFromSwipeLeft:(_Bool)arg1;
- (id)withFromSwipeRight:(_Bool)arg1;
- (id)withFromTap:(_Bool)arg1;
- (id)withIsCharmNew:(_Bool)arg1;
- (id)withIsFriendProfile:(_Bool)arg1;
- (id)withIsGroupProfile:(_Bool)arg1;
- (id)withMaxPosition:(unsigned int)arg1;
- (id)withPosition:(unsigned int)arg1;
- (id)withProfileSessionID:(id)arg1;
- (id)withViewDuration:(double)arg1;

@end

