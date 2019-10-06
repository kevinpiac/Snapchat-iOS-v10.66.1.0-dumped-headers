//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSOperationQueue, NSString, SCFuture, SCLensExplorerLensItem, SCPromise;
@protocol SCRequestManager;

@interface SCLensExplorerLensAnimationDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    NSMutableArray *_images;
    NSOperationQueue *_downloadingQueue;
    NSString *_name;
    struct CGSize _preferredSize;
    SCLensExplorerLensItem *_lensExplorerItem;
    SCFuture *_downloadResult;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)completeOperation;
@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
- (id)initWithRequestManager:(id)arg1 lensExplorerItem:(id)arg2 preferredSize:(struct CGSize)arg3;
@property(readonly, nonatomic) SCLensExplorerLensItem *lensExplorerItem; // @synthesize lensExplorerItem=_lensExplorerItem;
- (void)main;
- (id)name;

@end

