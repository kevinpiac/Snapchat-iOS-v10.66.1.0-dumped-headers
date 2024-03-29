//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCLensExplorerLensCellViewModelDataProviderConfigurationFactory;
@protocol SCLensExplorerFactoryProtocol;

@interface SCLensExplorerLensCellViewModelDataProviderFactory : NSObject
{
    id <SCLensExplorerFactoryProtocol> _lensExplorerFactory;
    NSMutableDictionary *_dataProviders;
    SCLensExplorerLensCellViewModelDataProviderConfigurationFactory *_configurationFactory;
}

- (void).cxx_destruct;
- (id)cellHalfHeightViewModelDataProviderWithCategory:(unsigned long long)arg1;
- (id)cellViewModelDataProviderWithSectionId:(id)arg1;
- (id)initWithLensExplorerFactory:(id)arg1;
- (void)reset;

@end

