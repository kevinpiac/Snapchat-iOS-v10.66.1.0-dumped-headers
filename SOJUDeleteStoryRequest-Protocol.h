//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUDeleteStoryRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSNumber *archiveOnly;
@property(readonly, copy, nonatomic) NSString *groupId;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *storyId;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, copy, nonatomic) NSString *username;
@end

