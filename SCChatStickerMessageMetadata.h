//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCChatStickerMessageMetadata : NSObject <NSCopying, NSCoding>
{
    long long _stickerLoadState;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStickerLoadState:(long long)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long stickerLoadState; // @synthesize stickerLoadState=_stickerLoadState;

@end

