//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MGLTileSource.h"

@interface MGLRasterSource : MGLTileSource
{
}

- (id)attributionHTMLString;
- (id)configurationURL;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2;
- (id)initWithIdentifier:(id)arg1 configurationURL:(id)arg2 tileSize:(double)arg3;
- (id)initWithIdentifier:(id)arg1 tileURLTemplates:(id)arg2 options:(id)arg3;
@property(readonly, nonatomic) struct RasterSource *rawSource;

@end

