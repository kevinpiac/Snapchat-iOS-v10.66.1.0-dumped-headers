//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCContextV2ViewModel : NSObject
{
    NSDictionary *_viewModel;
}

+ (id)withComposerContentProto:(id)arg1;
- (void).cxx_destruct;
- (void)applyViewModelToView:(id)arg1 substitutionHandler:(id)arg2;
- (id)createCTAViewWithOwner:(id)arg1 componentContext:(id)arg2 substitutionHandler:(id)arg3;
- (id)createCardsViewWithOwner:(id)arg1 componentContext:(id)arg2 substitutionHandler:(id)arg3;
- (id)createComposerViewWithDocumentName:(id)arg1 bundleName:(id)arg2 owner:(id)arg3 substitutionHandler:(id)arg4;
- (_Bool)hasCards;
- (id)initWithJSON:(id)arg1;

@end

