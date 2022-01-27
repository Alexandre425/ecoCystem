# ecoCystem

A life, evolution and ecosystem simulator written in C++

### Project objectives
- [ ] OpenGL window and basic drawing
- [ ] ImGui integration
- [ ] Add basic plants that spawn randomly
- [ ] Basic herbivore creatures
- [ ] Creature reproduction
- [ ] Creature traits
- [ ] Decision system assigning scores to each of a creature's needs
- [ ] Space partitioning (quadtree or grid)
- [ ] Noise-function based soil richness (affecting resource abundance)
- [ ] Saving and loading the simulation state (possibly through JSON)
- [ ] Semi-permanent plants with leaf/fruit regeneration and reproduction
- [ ] Complex creatures with biomass, growth, digestion


### Plants
Objectives for the plant implementation.
* Plants have a max height and width.
  * Height helps a plant compete for sunlight and shadow the competition, and to keep its leaves out of reach of creatures.
  * Width increases the amount of maximum leaves a plant has, and so the amount of sunlight it can absorb.
  * The bigger the plant, the higher the static energy requirement it has.
* Start as a small seedling, and grow until maturity (its maximum size).
* Energy produced depends on the available sunlight (affected by the width, leaf biomass, and shadowing by other plants).
  * Energy goes to producing leaves (if they are missing), fruit (if the plant is mature), or growing in size.
  * There is a static energy production independent of leaf biomass, so that a plant with no leaves can recover.
* Plants reproduce by having their fruits eaten.
  * Fruits are not a separate entity, but a part of their plant. Creatures eat the fruit by reaching the plant.
  * Fruits are accessible to any creature, independently of height (plants want their fruit to be eaten, unlike the leaves).
  * If a fruit is eaten, the plant has a chance to spawn offspring nearby.
  * The bigger the fruit, the better the chance of reproduction.
* Trait list:
  * Height
  * Width
  * Fruit size
  * Leaf size (smaller leaves are more cold resistant)

### Creatures
A few ideas for how the creatures are to be implemented.
#### Size
* Creatures have a max height and width.
  * Height lets them reach higher leaves.
  * Combined with width, they dictate the biomass of a creature.
* Lifespan is dependent on size
  * Larger creatures live longer, but grow and mature slower
* Visibility also depends on size
  * Larger creatures are easier to spot, so smaller ones can potentially identify predators before being spotted.
#### Reproduction
* All creatures are viviparous - the females fertilize, gestate, and birth offspring.
* Creatures start as a baby with trait dependent size, and may stay near their mother for protection.
* Maturity is based on reaching a percentage of the age and having grown enough.
#### Behavior
* Creatures score their needs every second, with the highest score corresponding to the action taken.
* The base state is wandering, when a creature has a need they cannot fulfill (eating with no food around).
* A few actions a creature might take:
  * Eat a plant or its fruit
  * Hunt a creature
  * Defend itself or run from an attack
  * Mate
  * Move with its herd
  * Defend a member of the herd
  * Defend a carcass from a competing carnivore
  * Climb a tall plant for safety
  * Fly
#### Feeding and energy
* There are 3 energy pools
  * Eaten food goes to the stomach, where it gets converted to stamina through digestion.
    * Slower digestion is more efficient at converting into stamina.
  * If stamina is sufficiently high, the creature can grow (if imature), increase in biomass (if malnourished), or fatten (overcap biomass).
  * If the biomass goes below a certain percentage of the max biomass, the creature starves and dies.
  * Actions deplete stamina (if available) or biomass. Overcap biomass (fat) is more efficient than undercap biomass (muscle). Stamina is much more efficient than both.
  * The size of the three pools is based on biomass.
#### Health
* Creatures have health, that gets reduced upon taking damage. When it reaches 0, they die.
  * Maximum health is based on biomass. A malnourished creature has less maximum health.
  * Regenerating health costs stamina. A starving creature cannot regenerate health.
#### Traits
* A creature's traits are an average of their parents', plus random mutations.
* Traits have upsides and downsides, for example:
  * Being faster helps you compete more aggresively for food, but consumes more energy.
  * Having an iron gut lets you eat partially rotten meat, but digest food less efficiently.
#### Death
* When creatures die, they spawn a carcass at their location.
  * Carcasses contain biomass equal to the creature's biomass.
  * Overcapped biomass (fat) adds extra biomass to the carcass (10 bm + 1 overcap bm = 12 bm, for example) as fat is more nutritious.
  * Over time, the carcass rots. Only creatures with an iron gut trait above the rotting percentage can eat it.
