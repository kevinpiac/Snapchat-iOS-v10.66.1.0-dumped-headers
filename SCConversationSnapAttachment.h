//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCConversationSnapAttachmentBody;

@interface SCConversationSnapAttachment : NSObject <NSCopying>
{
    SCConversationSnapAttachmentBody *_attachmentBody;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCConversationSnapAttachmentBody *attachmentBody; // @synthesize attachmentBody=_attachmentBody;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAttachmentBody:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end

