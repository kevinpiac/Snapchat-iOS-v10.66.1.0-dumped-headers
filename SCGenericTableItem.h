//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableItem-Protocol.h"

@class NSString;

@interface SCGenericTableItem : NSObject <SCTableItem>
{
    CDUnknownBlockType _configHandler;
    CDUnknownBlockType _selectionHandler;
}

+ (Class)_cellClass;
+ (id)allocForCellClass:(Class)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)cellClass;
+ (id)cellNib;
+ (id)cellTypeIdentifier;
- (void).cxx_destruct;
- (id)configureCellForItem:(id)arg1;
- (void)didSelectItem;
- (id)initWithConfigurationHandler:(CDUnknownBlockType)arg1 selectionHandler:(CDUnknownBlockType)arg2;
- (_Bool)respondsToSelector:(SEL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

