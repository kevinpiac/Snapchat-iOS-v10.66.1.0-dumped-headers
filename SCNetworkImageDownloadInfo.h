//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCNetworkImageDownloadInfo : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    NSArray *_mediaInfo_contexts;
    long long _mediaInfo_mediaContextType;
    NSArray *_bitmojiInfo_contexts;
    NSString *_bitmojiInfo_feature;
    unsigned long long _bitmojiInfo_scale;
    unsigned long long _bitmojiInfo_imageType;
    _Bool _bitmojiInfo_canUsePrior;
    NSArray *_bitmojiSelfieInfo_contexts;
    NSString *_bitmojiSelfieInfo_feature;
    unsigned long long _bitmojiSelfieInfo_type;
    unsigned long long _bitmojiSelfieInfo_scale;
    _Bool _bitmojiSelfieInfo_canUsePrior;
    unsigned long long _bitmojiSelfieInfo_selfieIdModifier;
}

+ (id)bitmojiInfoWithContexts:(id)arg1 feature:(id)arg2 scale:(unsigned long long)arg3 imageType:(unsigned long long)arg4 canUsePrior:(_Bool)arg5;
+ (id)bitmojiSelfieInfoWithContexts:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 scale:(unsigned long long)arg4 canUsePrior:(_Bool)arg5 selfieIdModifier:(unsigned long long)arg6;
+ (id)mediaInfoWithContexts:(id)arg1 mediaContextType:(long long)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchMediaInfo:(CDUnknownBlockType)arg1 bitmojiInfo:(CDUnknownBlockType)arg2 bitmojiSelfieInfo:(CDUnknownBlockType)arg3;

@end
