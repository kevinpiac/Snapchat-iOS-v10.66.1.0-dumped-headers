//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL, SCMedia;

@interface SCDiscoverFeedInterestSelectionPublicUserData : NSObject <NSCopying, NSCoding>
{
    NSString *_displayText;
    NSString *_displaySubtext;
    NSURL *_thumbnailUrl;
    SCMedia *_thumbnailFallbackMedia;
    NSString *_publicUserId;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displaySubtext; // @synthesize displaySubtext=_displaySubtext;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayText:(id)arg1 displaySubtext:(id)arg2 thumbnailUrl:(id)arg3 thumbnailFallbackMedia:(id)arg4 publicUserId:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *publicUserId; // @synthesize publicUserId=_publicUserId;
@property(readonly, copy, nonatomic) SCMedia *thumbnailFallbackMedia; // @synthesize thumbnailFallbackMedia=_thumbnailFallbackMedia;
@property(readonly, copy, nonatomic) NSURL *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;

@end
