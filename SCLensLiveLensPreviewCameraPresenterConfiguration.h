//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCLensLiveLensPreviewCameraPresenterConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _isLensChallenges;
    long long _snapSource;
    long long _roleType;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapSource:(long long)arg1 roleType:(long long)arg2 isLensChallenges:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLensChallenges; // @synthesize isLensChallenges=_isLensChallenges;
@property(readonly, nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(readonly, nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;

@end

