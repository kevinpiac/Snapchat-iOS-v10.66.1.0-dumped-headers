//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesCustomStoryParticipant : NSObject <NSCopying>
{
    _Bool _canView;
    _Bool _canPost;
    NSString *_userId;
    NSString *_username;
    NSString *_displayName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool canPost; // @synthesize canPost=_canPost;
@property(readonly, nonatomic) _Bool canView; // @synthesize canView=_canView;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithUserId:(id)arg1 username:(id)arg2 displayName:(id)arg3 canView:(_Bool)arg4 canPost:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
