//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerLensMediaDownloaderProtocol-Protocol.h"

@class NSOperationQueue, NSString;
@protocol SCRequestManager;

@interface SCLensExplorerLensMediaDownloader : NSObject <SCLensExplorerLensMediaDownloaderProtocol>
{
    id <SCRequestManager> _requestManager;
    NSOperationQueue *_downloadingQueue;
}

+ (id)createDownloaderWithRequestManager:(id)arg1;
- (void).cxx_destruct;
- (id)_operationWithURL:(id)arg1;
- (id)_operationWithUnlockableId:(id)arg1;
- (void)dealloc;
- (id)downloadAnimationForLensExplorerItem:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)downloadImageWithURL:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)initWithRequestManager:(id)arg1;
- (void)lensExplorerItemsBecomeHidden:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
