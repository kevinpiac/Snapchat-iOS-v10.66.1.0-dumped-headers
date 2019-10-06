//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSSet, NSString, SCLazy, SCSelectionTracker;
@protocol SCActionHandling, SCImageDownloading;

@interface SCSnapchatterSelectionSectionCreator : NSObject <SCSearchSectionCreating>
{
    NSSet *_sectionIdentifiers;
    SCLazy *_snapchatterSectionDataSource;
    SCLazy *_snapchattersDataTracker;
    SCSelectionTracker *_selectionTracker;
    id <SCImageDownloading> _imageDownloader;
    SCLazy *_viewModelSource;
    id <SCActionHandling> _actionHandler;
    CDUnknownBlockType _fastIndexerGenerator;
}

- (void).cxx_destruct;
- (id)_snapchatterSectionForIdentifier:(id)arg1 withTitle:(id)arg2;
- (id)initWithSectionIdentifiers:(id)arg1 snapchatterSectionDataSource:(id)arg2 snapchattersDataTracker:(id)arg3 selectionTracker:(id)arg4 actionHandler:(id)arg5 imageDownloader:(id)arg6 viewModelSource:(id)arg7 fastIndexerGenerator:(CDUnknownBlockType)arg8;
- (id)sectionForDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

