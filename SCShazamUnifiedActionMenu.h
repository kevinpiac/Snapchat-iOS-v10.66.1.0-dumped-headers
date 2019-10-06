//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString, SCSongInfo, UIViewController;
@protocol SCShazamUnifiedActionMenuDelegate, SCUnifiedActionMenuDataProviderDelegate;

@interface SCShazamUnifiedActionMenu : NSObject <SCUnifiedActionMenuDataProvider, SCActionHandling>
{
    SCSongInfo *_songInfo;
    UIViewController *_parentViewController;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
    id <SCShazamUnifiedActionMenuDelegate> _shazamDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSongInfo:(id)arg1 parentViewController:(id)arg2;
@property(readonly, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <SCShazamUnifiedActionMenuDelegate> shazamDelegate; // @synthesize shazamDelegate=_shazamDelegate;
@property(readonly, nonatomic) SCSongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

