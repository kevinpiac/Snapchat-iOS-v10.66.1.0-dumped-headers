//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCUnifiedProfileImageListCollectionViewCell.h"

#import "SCActionHandlingDelegate-Protocol.h"
#import "SCActionable-Protocol.h"

@class NSString, SCMyUnifiedProfileSnapProLogoView;
@protocol SCActionHandling;

@interface SCMyUnifiedProfileSnapProCollectionViewCell : SCUnifiedProfileImageListCollectionViewCell <SCActionHandlingDelegate, SCActionable>
{
    SCMyUnifiedProfileSnapProLogoView *_logoView;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImageDownloader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

