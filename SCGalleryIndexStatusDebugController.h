//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRefreshableDebugViewDelegate-Protocol.h"

@class NSString, SCGallerySearchIndexer, SCRefreshableDebugView;

@interface SCGalleryIndexStatusDebugController : NSObject <SCRefreshableDebugViewDelegate>
{
    SCRefreshableDebugView *_debugView;
    SCGallerySearchIndexer *_gallerySearchIndexer;
}

- (void).cxx_destruct;
- (void)debugViewDidTapRefresh:(id)arg1;
- (id)initWithGallerySearchIndexer:(id)arg1;
- (void)show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

