//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendsFeedMediaSaveMessage : NSObject <NSCopying>
{
    _Bool _isUnread;
    NSString *_actionPerformer;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionPerformer; // @synthesize actionPerformer=_actionPerformer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithActionPerformer:(id)arg1 isUnread:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isUnread; // @synthesize isUnread=_isUnread;

@end

