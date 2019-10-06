//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class SCChatV3MetadataStore;
@protocol SCChatRequestManager;

@interface SCChatURLMetadataDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3MetadataStore *_metadataStore;
}

- (void).cxx_destruct;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 metadataStore:(id)arg2;

@end

