//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface SCLensExplorerVisibleItemsTracker : NSObject
{
    unsigned long long _tartgetSection;
    NSSet *_visibleItems;
    NSSet *_appearedItems;
    NSSet *_disappearedItems;
}

- (void).cxx_destruct;
- (id)_filterOutIgnoredSection:(id)arg1;
@property(retain, nonatomic) NSSet *appearedItems; // @synthesize appearedItems=_appearedItems;
@property(retain, nonatomic) NSSet *disappearedItems; // @synthesize disappearedItems=_disappearedItems;
- (id)init;
- (id)initWithTargetSection:(unsigned long long)arg1;
- (_Bool)isItemVisibleAtIndex:(unsigned long long)arg1;
@property(retain, nonatomic) NSSet *visibleItems; // @synthesize visibleItems=_visibleItems;
- (void)visibleItemsChanged:(id)arg1;

@end
