/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Cocoa/Cocoa.h>

@class NSString, TBrowserViewController, TNodeViewSettings;

@protocol BrowserController <NSObject>
@property(nonatomic) BOOL binding;
@property(readonly, nonatomic) BOOL isTimeMachineBrowser;
@property(retain, nonatomic) TNodeViewSettings *viewSettings;
@property(retain, nonatomic) NSString *viewStyle;
@property(retain, nonatomic) NSString *groupBy;
@property(nonatomic) struct TNodeBrowser *nodeBrowser;
@property(readonly) TBrowserViewController *browserViewController;
- (void)targetToSearch;
- (id)searchFieldText;
- (void)searchWasChanged;
- (void)saveQuery:(BOOL)arg1;
- (void)updateForSearchSliceChange;
- (BOOL)usesSuggestions;
- (struct TMDQueryAliasNode *)savedSearchTarget;
- (struct TMDQueryAliasNode *)searchTarget;
- (void)historyChanged;
- (BOOL)nodeIsDimmed:(const struct TFENode *)arg1;
- (BOOL)isBackupBrowser;
- (BOOL)isSnapshotImageBrowser;
- (struct CGSize)minimumBrowserViewSize;
- (void)reduceRootedPath:(struct TFENodeVector *)arg1;
- (void)openLocation:(const struct TFENode *)arg1 origin:(struct ISpawnOrigin *)arg2;
- (id)nodeViewSettings;
- (struct TFENode)sidebarTarget;
- (const struct TFENodeVector *)targetPath;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2 rebuildView:(BOOL)arg3;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (void)newTargetPathForNode:(const struct TFENode *)arg1 existingPath:(const struct TFENodeVector *)arg2 newPath:(struct TFENodeVector *)arg3;
- (struct TFENode)target;
- (void)sidebarDidChangeVisibility:(BOOL)arg1;
- (BOOL)sidebarIsVisible;
- (BOOL)shouldShowSidebar;
- (BOOL)resultCountIsPartial;
- (void)browserSelectionChanged;
- (void)openSelection;

@optional
- (BOOL)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (BOOL)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (BOOL)allowsBrowsingPackages;
- (BOOL)canBrowseNode:(const struct TFENode *)arg1;
- (BOOL)canRenameNode:(const struct TFENode *)arg1;
- (BOOL)urlIsDimmed:(id)arg1;
@end

