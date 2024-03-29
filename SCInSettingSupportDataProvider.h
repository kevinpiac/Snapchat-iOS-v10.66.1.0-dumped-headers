//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacSettingsDataProviding-Protocol.h"

@class NSString, SCCognacOperaPlayerItem;

@interface SCInSettingSupportDataProvider : NSObject <SCCognacSettingsDataProviding>
{
    SCCognacOperaPlayerItem *_playerItem;
    NSString *_gameSessionId;
}

- (void).cxx_destruct;
- (id)_feedbackListCellViewModels;
- (id)_supportListCellViewModels;
- (id)feedbackSectionViewModels;
- (id)initWithPlayerItem:(id)arg1 gameSessionId:(id)arg2;
- (id)supportSectionViewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

