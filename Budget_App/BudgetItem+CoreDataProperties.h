//
//  BudgetItem+CoreDataProperties.h
//  Budget_App
//
//  Created by Stephanie on 3/7/16.
//  Copyright © 2016 Stephanie. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "BudgetItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface BudgetItem (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *category;
@property (nullable, nonatomic, retain) NSString *name;
@property (nonatomic) double amount;
@property (nonatomic) int64_t frequencyNumber;
@property (nullable, nonatomic, retain) NSString *frequencyTimePeriod;
@property (nullable, nonatomic, retain) NSString *notes;

@end

NS_ASSUME_NONNULL_END
 