//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArchiveItem;
@protocol SCArchiveTaskDelegate;

@interface SCArchiveTask : NSObject
{
    id <SCArchiveTaskDelegate> _delegate;
    CDUnknownBlockType _failureBlock;
    SCArchiveItem *_item;
    CDUnknownBlockType _successBlock;
}

+ (id)createTask:(id)arg1 delegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCArchiveTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
- (id)initWithItem:(id)arg1 delegate:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) SCArchiveItem *item; // @synthesize item=_item;
- (void)runOnQueue:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;

@end

