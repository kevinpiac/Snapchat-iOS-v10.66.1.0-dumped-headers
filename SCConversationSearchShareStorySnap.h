//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSearchShareStorySnap : NSObject <NSCopying>
{
    BOOL _mediaType;
    NSString *_snapId;
    NSString *_dynamicStoryId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *dynamicStoryId; // @synthesize dynamicStoryId=_dynamicStoryId;
- (unsigned long long)hash;
- (id)initWithSnapId:(id)arg1 mediaType:(BOOL)arg2 dynamicStoryId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) BOOL mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;

@end

