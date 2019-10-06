//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesStoryPostingUpdateRequest : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_postState_clientId;
    long long _postState_postingState;
    NSString *_postProgress_clientId;
    unsigned long long _postProgress_postingProgress;
}

+ (id)postProgressWithClientId:(id)arg1 postingProgress:(unsigned long long)arg2;
+ (id)postStateWithClientId:(id)arg1 postingState:(long long)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchPostState:(CDUnknownBlockType)arg1 postProgress:(CDUnknownBlockType)arg2;

@end

