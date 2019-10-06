//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImage;

@interface SCSearchPersonStoryThumbnail : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldShowReplayButton;
    _Bool _shouldShowLoadingSpinner;
    NSString *_username;
    SCNetworkImage *_thumbnailNetworkImage;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 thumbnailNetworkImage:(id)arg2 shouldShowReplayButton:(_Bool)arg3 shouldShowLoadingSpinner:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowLoadingSpinner; // @synthesize shouldShowLoadingSpinner=_shouldShowLoadingSpinner;
@property(readonly, nonatomic) _Bool shouldShowReplayButton; // @synthesize shouldShowReplayButton=_shouldShowReplayButton;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnailNetworkImage; // @synthesize thumbnailNetworkImage=_thumbnailNetworkImage;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

