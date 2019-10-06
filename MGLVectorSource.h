//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLTileSource.h"

@interface MGLVectorSource : MGLTileSource
{
}

+ (id)mapboxStreetsLanguages;
+ (id)preferredMapboxStreetsLanguage;
- (id)attributionHTMLString;
- (id)configurationURL;
- (id)featuresInSourceLayersWithIdentifiers:(id)arg1 predicate:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2;
- (id)initWithIdentifier:(id)arg1 tileURLTemplates:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic, getter=isMapboxStreets) _Bool mapboxStreets;
- (id)localizedKeysByKeyForPreferredLanguage:(id)arg1;
@property(readonly, nonatomic) struct VectorSource *rawSource;

@end
