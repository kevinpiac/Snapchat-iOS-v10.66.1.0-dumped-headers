//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, NSString, SCLens;

@interface SCLensDataProviderConfigurationBuilder : NSObject
{
    NSPredicate *_filteringPredicate;
    NSString *_applicableContext;
    SCLens *_originalLens;
    _Bool _shouldShowStudioLenses;
    _Bool _shouldBlockDefaultBundledLenses;
    NSString *_ownerContextDescription;
}

+ (id)withLensDataProviderConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setApplicableContext:(id)arg1;
- (id)setFilteringPredicate:(id)arg1;
- (id)setOriginalLens:(id)arg1;
- (id)setOwnerContextDescription:(id)arg1;
- (id)setShouldBlockDefaultBundledLenses:(_Bool)arg1;
- (id)setShouldShowStudioLenses:(_Bool)arg1;

@end

