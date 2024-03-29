//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTableItem-Protocol.h"

@class NSString;

@interface SCTextTableItem : NSObject <SCTableItem>
{
    NSString *_primaryText;
    NSString *_secondaryText;
    long long _disclosureIndicator;
    CDUnknownBlockType _selectionHandler;
    NSString *_primaryTextAccessibilityIdentifier;
    NSString *_primaryTextAccessibilityLabel;
    NSString *_secondaryTextAccessibilityIdentifier;
    NSString *_secondaryTextAccessibilityLabel;
}

+ (Class)cellClass;
+ (id)cellNib;
+ (id)cellTypeIdentifier;
+ (id)itemWithPrimaryText:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)itemWithPrimaryText:(id)arg1 indicator:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)itemWithPrimaryText:(id)arg1 secondaryText:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)itemWithPrimaryText:(id)arg1 secondaryText:(id)arg2 indicator:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)configureCellForItem:(id)arg1;
- (void)didSelectItem;
- (id)initWithPrimaryText:(id)arg1 secondaryText:(id)arg2 disclosureIndicator:(long long)arg3 selectionHandler:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) NSString *primaryTextAccessibilityIdentifier; // @synthesize primaryTextAccessibilityIdentifier=_primaryTextAccessibilityIdentifier;
@property(copy, nonatomic) NSString *primaryTextAccessibilityLabel; // @synthesize primaryTextAccessibilityLabel=_primaryTextAccessibilityLabel;
@property(copy, nonatomic) NSString *secondaryTextAccessibilityIdentifier; // @synthesize secondaryTextAccessibilityIdentifier=_secondaryTextAccessibilityIdentifier;
@property(copy, nonatomic) NSString *secondaryTextAccessibilityLabel; // @synthesize secondaryTextAccessibilityLabel=_secondaryTextAccessibilityLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

