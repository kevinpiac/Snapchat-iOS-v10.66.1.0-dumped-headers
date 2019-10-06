//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  2 2019 14:24:29).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProcessingModule-Protocol.h"

@class NSArray, NSMutableSet, NSString;
@protocol SCProcessingPipelineOrdering;

@interface SCProcessingPipeline : NSObject <SCProcessingModule>
{
    _Bool _shouldUpdateOrderedModules;
    NSArray *_orderedModules;
    id <SCProcessingPipelineOrdering> _pipelineOrder;
    NSMutableSet *_processingModulesSet;
}

- (void).cxx_destruct;
- (void)_buildOrderedPipelineIfNecessary;
- (void)_removeModuleEqualTo:(id)arg1;
- (void)addProcessingModule:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPipelineOrder:(id)arg1;
@property(retain, nonatomic) NSArray *orderedModules; // @synthesize orderedModules=_orderedModules;
@property(retain, nonatomic) id <SCProcessingPipelineOrdering> pipelineOrder; // @synthesize pipelineOrder=_pipelineOrder;
@property(retain, nonatomic) NSMutableSet *processingModulesSet; // @synthesize processingModulesSet=_processingModulesSet;
- (void)removeProcessingModule:(id)arg1;
- (struct opaqueCMSampleBuffer *)render:(struct RenderData)arg1;
@property(readonly, nonatomic) NSArray *renderPipeline;
@property(nonatomic) _Bool shouldUpdateOrderedModules; // @synthesize shouldUpdateOrderedModules=_shouldUpdateOrderedModules;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
