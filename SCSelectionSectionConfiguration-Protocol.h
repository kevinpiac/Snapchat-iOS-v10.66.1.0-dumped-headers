//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSOrderedSet, NSString;

@protocol SCSelectionSectionConfiguration <NSObject>
@property(readonly, copy, nonatomic) NSOrderedSet *indexScript;
@property(readonly, copy, nonatomic) NSOrderedSet *indexingSections;
@property(readonly, copy, nonatomic) NSOrderedSet *nonQuerySections;
- (NSString *)predefinedIndexSymbolForSectionIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *predefinedSections;
@property(readonly, copy, nonatomic) NSOrderedSet *querySections;
- (NSString *)titleForSectionIdentifier:(NSString *)arg1;
@property(readonly, copy, nonatomic) NSOrderedSet *viewMoreSections;
@end

